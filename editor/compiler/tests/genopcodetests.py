#!/usr/bin/env python -B

import os

opcodes = [
        [ 'adc', 'a', '(hl)' ],
        [ 'adc', 'a', '(ix+#)' ],
        [ 'adc', 'a', '(iy+#)' ],
        [ 'adc', 'a', 'a' ],
        [ 'adc', 'a', 'b' ],
        [ 'adc', 'a', 'c' ],
        [ 'adc', 'a', 'd' ],
        [ 'adc', 'a', 'e' ],
        [ 'adc', 'a', 'h' ],
        [ 'adc', 'a', 'l' ],
        [ 'adc', 'a', '#' ],
        [ 'adc', 'hl', 'bc' ],
        [ 'adc', 'hl', 'de' ],
        [ 'adc', 'hl', 'hl' ],
        [ 'adc', 'hl', 'sp' ],

        [ 'add', 'a', '(hl)' ],
        [ 'add', 'a', '(ix+#)' ],
        [ 'add', 'a', '(iy+#)' ],
        [ 'add', 'a', 'a' ],
        [ 'add', 'a', 'b' ],
        [ 'add', 'a', 'c' ],
        [ 'add', 'a', 'd' ],
        [ 'add', 'a', 'e' ],
        [ 'add', 'a', 'h' ],
        [ 'add', 'a', 'l' ],
        [ 'add', 'a', '#' ],
        [ 'add', 'hl', 'bc' ],
        [ 'add', 'hl', 'de' ],
        [ 'add', 'hl', 'hl' ],
        [ 'add', 'hl', 'sp' ],
        [ 'add', 'ix', 'bc' ],
        [ 'add', 'ix', 'de' ],
        [ 'add', 'ix', 'ix' ],
        [ 'add', 'ix', 'sp' ],
        [ 'add', 'iy', 'bc' ],
        [ 'add', 'iy', 'de' ],
        [ 'add', 'iy', 'iy' ],
        [ 'add', 'iy', 'sp' ],

        [ 'and', '(hl)' ],
        [ 'and', '(ix+#)' ],
        [ 'and', '(iy+#)' ],
        [ 'and', 'a' ],
        [ 'and', 'b' ],
        [ 'and', 'c' ],
        [ 'and', 'd' ],
        [ 'and', 'e' ],
        [ 'and', 'h' ],
        [ 'and', 'l' ],
        [ 'and', '#' ],

        [ 'bit', '0', '(hl)' ],
        [ 'bit', '0', '(ix+#)' ],
        [ 'bit', '0', '(iy+#)' ],
        [ 'bit', '0', 'a' ],
        [ 'bit', '0', 'b' ],
        [ 'bit', '0', 'c' ],
        [ 'bit', '0', 'd' ],
        [ 'bit', '0', 'e' ],
        [ 'bit', '0', 'h' ],
        [ 'bit', '0', 'l' ],
        [ 'bit', '1', '(hl)' ],
        [ 'bit', '1', '(ix+#)' ],
        [ 'bit', '1', '(iy+#)' ],
        [ 'bit', '1', 'a' ],
        [ 'bit', '1', 'b' ],
        [ 'bit', '1', 'c' ],
        [ 'bit', '1', 'd' ],
        [ 'bit', '1', 'e' ],
        [ 'bit', '1', 'h' ],
        [ 'bit', '1', 'l' ],
        [ 'bit', '2', '(hl)' ],
        [ 'bit', '2', '(ix+#)' ],
        [ 'bit', '2', '(iy+#)' ],
        [ 'bit', '2', 'a' ],
        [ 'bit', '2', 'b' ],
        [ 'bit', '2', 'c' ],
        [ 'bit', '2', 'd' ],
        [ 'bit', '2', 'e' ],
        [ 'bit', '2', 'h' ],
        [ 'bit', '2', 'l' ],
        [ 'bit', '3', '(hl)' ],
        [ 'bit', '3', '(ix+#)' ],
        [ 'bit', '3', '(iy+#)' ],
        [ 'bit', '3', 'a' ],
        [ 'bit', '3', 'b' ],
        [ 'bit', '3', 'c' ],
        [ 'bit', '3', 'd' ],
        [ 'bit', '3', 'e' ],
        [ 'bit', '3', 'h' ],
        [ 'bit', '3', 'l' ],
        [ 'bit', '4', '(hl)' ],
        [ 'bit', '4', '(ix+#)' ],
        [ 'bit', '4', '(iy+#)' ],
        [ 'bit', '4', 'a' ],
        [ 'bit', '4', 'b' ],
        [ 'bit', '4', 'c' ],
        [ 'bit', '4', 'd' ],
        [ 'bit', '4', 'e' ],
        [ 'bit', '4', 'h' ],
        [ 'bit', '4', 'l' ],
        [ 'bit', '5', '(hl)' ],
        [ 'bit', '5', '(ix+#)' ],
        [ 'bit', '5', '(iy+#)' ],
        [ 'bit', '5', 'a' ],
        [ 'bit', '5', 'b' ],
        [ 'bit', '5', 'c' ],
        [ 'bit', '5', 'd' ],
        [ 'bit', '5', 'e' ],
        [ 'bit', '5', 'h' ],
        [ 'bit', '5', 'l' ],
        [ 'bit', '6', '(hl)' ],
        [ 'bit', '6', '(ix+#)' ],
        [ 'bit', '6', '(iy+#)' ],
        [ 'bit', '6', 'a' ],
        [ 'bit', '6', 'b' ],
        [ 'bit', '6', 'c' ],
        [ 'bit', '6', 'd' ],
        [ 'bit', '6', 'e' ],
        [ 'bit', '6', 'h' ],
        [ 'bit', '6', 'l' ],
        [ 'bit', '7', '(hl)' ],
        [ 'bit', '7', '(ix+#)' ],
        [ 'bit', '7', '(iy+#)' ],
        [ 'bit', '7', 'a' ],
        [ 'bit', '7', 'b' ],
        [ 'bit', '7', 'c' ],
        [ 'bit', '7', 'd' ],
        [ 'bit', '7', 'e' ],
        [ 'bit', '7', 'h' ],
        [ 'bit', '7', 'l' ],

        [ 'call', '##' ],
        [ 'call', 'c', '##' ],
        [ 'call', 'm', '##' ],
        [ 'call', 'nc', '##' ],
        [ 'call', 'nz', '##' ],
        [ 'call', 'p', '##' ],
        [ 'call', 'pe', '##' ],
        [ 'call', 'po', '##' ],
        [ 'call', 'z', '##' ],

        [ 'ccf' ],

        [ 'cp', '(hl)' ],
        [ 'cp', '(ix+#)' ],
        [ 'cp', '(iy+#)' ],
        [ 'cp', 'a' ],
        [ 'cp', 'b' ],
        [ 'cp', 'c' ],
        [ 'cp', 'd' ],
        [ 'cp', 'e' ],
        [ 'cp', 'h' ],
        [ 'cp', 'l' ],
        [ 'cp', '#' ],

        [ 'cpd' ],

        [ 'cpdr' ],

        [ 'cpir' ],

        [ 'cpi' ],

        [ 'cpl' ],

        [ 'daa' ],

        [ 'dec', '(hl)' ],
        [ 'dec', '(ix+#)' ],
        [ 'dec', '(iy+#)' ],
        [ 'dec', 'a' ],
        [ 'dec', 'b' ],
        [ 'dec', 'bc' ],
        [ 'dec', 'c' ],
        [ 'dec', 'd' ],
        [ 'dec', 'de' ],
        [ 'dec', 'e' ],
        [ 'dec', 'h' ],
        [ 'dec', 'hl' ],
        [ 'dec', 'ix' ],
        [ 'dec', 'iy' ],
        [ 'dec', 'l' ],
        [ 'dec', 'sp' ],

        [ 'di' ],

        [ 'djnz', '$+#' ],

        [ 'ei' ],

        [ 'ex', '(sp), hl' ],
        [ 'ex', '(sp), ix' ],
        [ 'ex', '(sp), iy' ],
        [ 'ex', 'af, af\'' ],
        [ 'ex', 'de, hl' ],

        [ 'exx' ],

        [ 'halt' ],

        [ 'im', '0' ],
        [ 'im', '1' ],
        [ 'im', '2' ],

        [ 'in', 'a, (#)' ],
        [ 'in', 'a, (c)' ],
        [ 'in', 'b, (c)' ],
        [ 'in', 'c, (c)' ],
        [ 'in', 'd, (c)' ],
        [ 'in', 'e, (c)' ],
        [ 'in', 'h, (c)' ],
        [ 'in', 'l, (c)' ],

        [ 'inc', '(hl)' ],
        [ 'inc', '(ix+#)' ],
        [ 'inc', '(iy+#)' ],

        [ 'inc', 'a' ],
        [ 'inc', 'b' ],
        [ 'inc', 'bc' ],
        [ 'inc', 'c' ],
        [ 'inc', 'd' ],
        [ 'inc', 'de' ],
        [ 'inc', 'e' ],
        [ 'inc', 'h' ],
        [ 'inc', 'hl' ],
        [ 'inc', 'ix' ],
        [ 'inc', 'iy' ],
        [ 'inc', 'l' ],
        [ 'inc', 'sp' ],

        [ 'ind' ],

        [ 'indr' ],

        [ 'ini' ],

        [ 'inir' ],

        [ 'jp', '##' ],
        [ 'jp', 'c', '##' ],
        [ 'jp', 'm', '##' ],
        [ 'jp', 'nc', '##' ],
        [ 'jp', 'nz', '##' ],
        [ 'jp', 'p', '##' ],
        [ 'jp', 'pe', '##' ],
        [ 'jp', 'po', '##' ],
        [ 'jp', 'z', '##' ],
        [ 'jp', '(hl)' ],
        [ 'jp', '(ix)' ],
        [ 'jp', '(iy)' ],

        [ 'jr', 'c', '$+#' ],
        [ 'jr', 'nc', '$+#' ],
        [ 'jr', 'nz', '$+#' ],
        [ 'jr', 'z', '$+#' ],
        [ 'jr', '$+#' ],

        [ 'ld', '(bc)', 'a' ],
        [ 'ld', '(de)', 'a' ],
        [ 'ld', '(hl)', 'a' ],
        [ 'ld', '(hl)', 'b' ],
        [ 'ld', '(hl)', 'c' ],
        [ 'ld', '(hl)', 'd' ],
        [ 'ld', '(hl)', 'e' ],
        [ 'ld', '(hl)', 'h' ],
        [ 'ld', '(hl)', 'l' ],
        [ 'ld', '(hl)', '#' ],
        [ 'ld', '(ix+#)', 'a' ],
        [ 'ld', '(ix+#)', 'b' ],
        [ 'ld', '(ix+#)', 'c' ],
        [ 'ld', '(ix+#)', 'd' ],
        [ 'ld', '(ix+#)', 'e' ],
        [ 'ld', '(ix+#)', 'h' ],
        [ 'ld', '(ix+#)', 'l' ],
        [ 'ld', '(ix+#)', '#' ],
        [ 'ld', '(iy+#)', 'a' ],
        [ 'ld', '(iy+#)', 'b' ],
        [ 'ld', '(iy+#)', 'c' ],
        [ 'ld', '(iy+#)', 'd' ],
        [ 'ld', '(iy+#)', 'e' ],
        [ 'ld', '(iy+#)', 'h' ],
        [ 'ld', '(iy+#)', 'l' ],
        [ 'ld', '(iy+#)', '#' ],
        [ 'ld', '(##)', 'a' ],
        [ 'ld', '(##)', 'bc' ],
        [ 'ld', '(##)', 'de' ],
        [ 'ld', '(##)', 'hl' ],
        [ 'ld', '(##)', 'ix' ],
        [ 'ld', '(##)', 'iy' ],
        [ 'ld', '(##)', 'sp' ],
        [ 'ld', 'a', '(bc)' ],
        [ 'ld', 'a', '(de)' ],
        [ 'ld', 'a', '(hl)' ],
        [ 'ld', 'a', '(ix+#)' ],
        [ 'ld', 'a', '(iy+#)' ],
        [ 'ld', 'a', '(##)' ],
        [ 'ld', 'a', 'a' ],
        [ 'ld', 'a', 'b' ],
        [ 'ld', 'a', 'c' ],
        [ 'ld', 'a', 'd' ],
        [ 'ld', 'a', 'e' ],
        [ 'ld', 'a', 'h' ],
        [ 'ld', 'a', 'i' ],
        [ 'ld', 'a', 'l' ],
        [ 'ld', 'a', '#' ],
        [ 'ld', 'a', 'r' ],
        [ 'ld', 'b', '(hl)' ],
        [ 'ld', 'b', '(ix+#)' ],
        [ 'ld', 'b', '(iy+#)' ],
        [ 'ld', 'b', 'a' ],
        [ 'ld', 'b', 'b' ],
        [ 'ld', 'b', 'c' ],
        [ 'ld', 'b', 'd' ],
        [ 'ld', 'b', 'e' ],
        [ 'ld', 'b', 'h' ],
        [ 'ld', 'b', 'l' ],
        [ 'ld', 'b', '#' ],
        [ 'ld', 'bc', '(##)' ],
        [ 'ld', 'bc', '##' ],
        [ 'ld', 'c', '(hl)' ],
        [ 'ld', 'c', '(ix+#)' ],
        [ 'ld', 'c', '(iy+#)' ],
        [ 'ld', 'c', 'a' ],
        [ 'ld', 'c', 'b' ],
        [ 'ld', 'c', 'c' ],
        [ 'ld', 'c', 'd' ],
        [ 'ld', 'c', 'e' ],
        [ 'ld', 'c', 'h' ],
        [ 'ld', 'c', 'l' ],
        [ 'ld', 'c', '#' ],
        [ 'ld', 'd', '(hl)' ],
        [ 'ld', 'd', '(ix+#)' ],
        [ 'ld', 'd', '(iy+#)' ],
        [ 'ld', 'd', 'a' ],
        [ 'ld', 'd', 'b' ],
        [ 'ld', 'd', 'c' ],
        [ 'ld', 'd', 'd' ],
        [ 'ld', 'd', 'e' ],
        [ 'ld', 'd', 'h' ],
        [ 'ld', 'd', 'l' ],
        [ 'ld', 'd', '#' ],
        [ 'ld', 'de', '(##)' ],
        [ 'ld', 'de', '##' ],
        [ 'ld', 'e', '(hl)' ],
        [ 'ld', 'e', '(ix+#)' ],
        [ 'ld', 'e', '(iy+#)' ],
        [ 'ld', 'e', 'a' ],
        [ 'ld', 'e', 'b' ],
        [ 'ld', 'e', 'c' ],
        [ 'ld', 'e', 'd' ],
        [ 'ld', 'e', 'e' ],
        [ 'ld', 'e', 'h' ],
        [ 'ld', 'e', 'l' ],
        [ 'ld', 'e', '#' ],
        [ 'ld', 'h', '(hl)' ],
        [ 'ld', 'h', '(ix+#)' ],
        [ 'ld', 'h', '(iy+#)' ],
        [ 'ld', 'h', 'a' ],
        [ 'ld', 'h', 'b' ],
        [ 'ld', 'h', 'c' ],
        [ 'ld', 'h', 'd' ],
        [ 'ld', 'h', 'e' ],
        [ 'ld', 'h', 'h' ],
        [ 'ld', 'h', 'l' ],
        [ 'ld', 'h', '#' ],
        [ 'ld', 'hl', '(##)' ],
        [ 'ld', 'hl', '##' ],
        [ 'ld', 'i', 'a' ],
        [ 'ld', 'ix', '(##)' ],
        [ 'ld', 'ix', '##' ],
        [ 'ld', 'iy', '(##)' ],
        [ 'ld', 'iy', '##' ],
        [ 'ld', 'l', '(hl)' ],
        [ 'ld', 'l', '(ix+#)' ],
        [ 'ld', 'l', '(iy+#)' ],
        [ 'ld', 'l', 'a' ],
        [ 'ld', 'l', 'b' ],
        [ 'ld', 'l', 'c' ],
        [ 'ld', 'l', 'd' ],
        [ 'ld', 'l', 'e' ],
        [ 'ld', 'l', 'h' ],
        [ 'ld', 'l', 'l' ],
        [ 'ld', 'l', '#' ],
        [ 'ld', 'r', 'a' ],
        [ 'ld', 'sp', '(##)' ],
        [ 'ld', 'sp', 'hl' ],
        [ 'ld', 'sp', 'ix' ],
        [ 'ld', 'sp', 'iy' ],
        [ 'ld', 'sp', '##' ],
        [ 'ld', 'sp', '$' ],    # ensure that $ is handled correctly
        [ 'ld', 'sp', '$+1' ],  # ensure that $ is handled correctly
        [ 'ld', 'sp', '$-1' ],  # ensure that $ is handled correctly
        [ 'ld', 'sp', '$-0x1235' ],  # ensure that overflow is handled correctly

        [ 'ldd' ],

        [ 'lddr' ],

        [ 'ldi' ],

        [ 'ldir' ],

        [ 'neg' ],

        [ 'nop' ],

        [ 'or', '(hl)' ],
        [ 'or', '(ix+#)' ],
        [ 'or', '(iy+#)' ],
        [ 'or', 'a' ],
        [ 'or', 'b' ],
        [ 'or', 'c' ],
        [ 'or', 'd' ],
        [ 'or', 'e' ],
        [ 'or', 'h' ],
        [ 'or', 'l' ],
        [ 'or', '#' ],

        [ 'otdr' ],

        [ 'otir' ],

        [ 'out', '(c)', 'a' ],
        [ 'out', '(c)', 'b' ],
        [ 'out', '(c)', 'c' ],
        [ 'out', '(c)', 'd' ],
        [ 'out', '(c)', 'e' ],
        [ 'out', '(c)', 'h' ],
        [ 'out', '(c)', 'l' ],
        [ 'out', '(#)', 'a' ],

        [ 'outd' ],

        [ 'outi' ],

        [ 'pop', 'af' ],
        [ 'pop', 'bc' ],
        [ 'pop', 'de' ],
        [ 'pop', 'hl' ],
        [ 'pop', 'ix' ],
        [ 'pop', 'iy' ],

        [ 'push', 'af' ],
        [ 'push', 'bc' ],
        [ 'push', 'de' ],
        [ 'push', 'hl' ],
        [ 'push', 'ix' ],
        [ 'push', 'iy' ],

        [ 'res', '0', '(hl)' ],
        [ 'res', '0', '(ix+#)' ],
        [ 'res', '0', '(iy+#)' ],
        [ 'res', '0', 'a' ],
        [ 'res', '0', 'b' ],
        [ 'res', '0', 'c' ],
        [ 'res', '0', 'd' ],
        [ 'res', '0', 'e' ],
        [ 'res', '0', 'h' ],
        [ 'res', '0', 'l' ],
        [ 'res', '1', '(hl)' ],
        [ 'res', '1', '(ix+#)' ],
        [ 'res', '1', '(iy+#)' ],
        [ 'res', '1', 'a' ],
        [ 'res', '1', 'b' ],
        [ 'res', '1', 'c' ],
        [ 'res', '1', 'd' ],
        [ 'res', '1', 'e' ],
        [ 'res', '1', 'h' ],
        [ 'res', '1', 'l' ],
        [ 'res', '2', '(hl)' ],
        [ 'res', '2', '(ix+#)' ],
        [ 'res', '2', '(iy+#)' ],
        [ 'res', '2', 'a' ],
        [ 'res', '2', 'b' ],
        [ 'res', '2', 'c' ],
        [ 'res', '2', 'd' ],
        [ 'res', '2', 'e' ],
        [ 'res', '2', 'h' ],
        [ 'res', '2', 'l' ],
        [ 'res', '3', '(hl)' ],
        [ 'res', '3', '(ix+#)' ],
        [ 'res', '3', '(iy+#)' ],
        [ 'res', '3', 'a' ],
        [ 'res', '3', 'b' ],
        [ 'res', '3', 'c' ],
        [ 'res', '3', 'd' ],
        [ 'res', '3', 'e' ],
        [ 'res', '3', 'h' ],
        [ 'res', '3', 'l' ],
        [ 'res', '4', '(hl)' ],
        [ 'res', '4', '(ix+#)' ],
        [ 'res', '4', '(iy+#)' ],
        [ 'res', '4', 'a' ],
        [ 'res', '4', 'b' ],
        [ 'res', '4', 'c' ],
        [ 'res', '4', 'd' ],
        [ 'res', '4', 'e' ],
        [ 'res', '4', 'h' ],
        [ 'res', '4', 'l' ],
        [ 'res', '5', '(hl)' ],
        [ 'res', '5', '(ix+#)' ],
        [ 'res', '5', '(iy+#)' ],
        [ 'res', '5', 'a' ],
        [ 'res', '5', 'b' ],
        [ 'res', '5', 'c' ],
        [ 'res', '5', 'd' ],
        [ 'res', '5', 'e' ],
        [ 'res', '5', 'h' ],
        [ 'res', '5', 'l' ],
        [ 'res', '6', '(hl)' ],
        [ 'res', '6', '(ix+#)' ],
        [ 'res', '6', '(iy+#)' ],
        [ 'res', '6', 'a' ],
        [ 'res', '6', 'b' ],
        [ 'res', '6', 'c' ],
        [ 'res', '6', 'd' ],
        [ 'res', '6', 'e' ],
        [ 'res', '6', 'h' ],
        [ 'res', '6', 'l' ],
        [ 'res', '7', '(hl)' ],
        [ 'res', '7', '(ix+#)' ],
        [ 'res', '7', '(iy+#)' ],
        [ 'res', '7', 'a' ],
        [ 'res', '7', 'b' ],
        [ 'res', '7', 'c' ],
        [ 'res', '7', 'd' ],
        [ 'res', '7', 'e' ],
        [ 'res', '7', 'h' ],
        [ 'res', '7', 'l' ],

        [ 'ret' ],
        [ 'ret', 'c' ],
        [ 'ret', 'm' ],
        [ 'ret', 'nc' ],
        [ 'ret', 'nz' ],
        [ 'ret', 'p' ],
        [ 'ret', 'pe' ],
        [ 'ret', 'po' ],
        [ 'ret', 'z' ],

        [ 'reti' ],

        [ 'retn' ],

        [ 'rl', '(hl)' ],
        [ 'rl', '(ix+#)' ],
        [ 'rl', '(iy+#)' ],
        [ 'rl', 'a' ],
        [ 'rl', 'b' ],
        [ 'rl', 'c' ],
        [ 'rl', 'd' ],
        [ 'rl', 'e' ],
        [ 'rl', 'h' ],
        [ 'rl', 'l' ],

        [ 'rla' ],

        [ 'rlc', '(hl)' ],
        [ 'rlc', '(ix+#)' ],
        [ 'rlc', '(iy+#)' ],
        [ 'rlc', 'a' ],
        [ 'rlc', 'b' ],
        [ 'rlc', 'c' ],
        [ 'rlc', 'd' ],
        [ 'rlc', 'e' ],
        [ 'rlc', 'h' ],
        [ 'rlc', 'l' ],

        [ 'rlca' ],

        [ 'rld' ],

        [ 'rr', '(hl)' ],
        [ 'rr', '(ix+#)' ],
        [ 'rr', '(iy+#)' ],
        [ 'rr', 'a' ],
        [ 'rr', 'b' ],
        [ 'rr', 'c' ],
        [ 'rr', 'd' ],
        [ 'rr', 'e' ],
        [ 'rr', 'h' ],
        [ 'rr', 'l' ],

        [ 'rra' ],

        [ 'rrc', '(hl)' ],
        [ 'rrc', '(ix+#)' ],
        [ 'rrc', '(iy+#)' ],
        [ 'rrc', 'a' ],
        [ 'rrc', 'b' ],
        [ 'rrc', 'c' ],
        [ 'rrc', 'd' ],
        [ 'rrc', 'e' ],
        [ 'rrc', 'h' ],
        [ 'rrc', 'l' ],

        [ 'rrca' ],

        [ 'rrd' ],

        [ 'rst', '0' ],
        [ 'rst', '8' ],
        [ 'rst', '16' ],
        [ 'rst', '24' ],
        [ 'rst', '32' ],
        [ 'rst', '40' ],
        [ 'rst', '48' ],
        [ 'rst', '56' ],

        [ 'sbc', 'a', '#' ],
        [ 'sbc', 'a', '(hl)' ],
        [ 'sbc', 'a', '(ix+#)' ],
        [ 'sbc', 'a', '(iy+#)' ],
        [ 'sbc', 'a', 'a' ],
        [ 'sbc', 'a', 'b' ],
        [ 'sbc', 'a', 'c' ],
        [ 'sbc', 'a', 'd' ],
        [ 'sbc', 'a', 'e' ],
        [ 'sbc', 'a', 'h' ],
        [ 'sbc', 'a', 'l' ],
        [ 'sbc', 'hl', 'bc' ],
        [ 'sbc', 'hl', 'de' ],
        [ 'sbc', 'hl', 'hl' ],
        [ 'sbc', 'hl', 'sp' ],

        [ 'scf' ],

        [ 'set', '0', '(hl)' ],
        [ 'set', '0', '(ix+#)' ],
        [ 'set', '0', '(iy+#)' ],
        [ 'set', '0', 'a' ],
        [ 'set', '0', 'b' ],
        [ 'set', '0', 'c' ],
        [ 'set', '0', 'd' ],
        [ 'set', '0', 'e' ],
        [ 'set', '0', 'h' ],
        [ 'set', '0', 'l' ],
        [ 'set', '1', '(hl)' ],
        [ 'set', '1', '(ix+#)' ],
        [ 'set', '1', '(iy+#)' ],
        [ 'set', '1', 'a' ],
        [ 'set', '1', 'b' ],
        [ 'set', '1', 'c' ],
        [ 'set', '1', 'd' ],
        [ 'set', '1', 'e' ],
        [ 'set', '1', 'h' ],
        [ 'set', '1', 'l' ],
        [ 'set', '2', '(hl)' ],
        [ 'set', '2', '(ix+#)' ],
        [ 'set', '2', '(iy+#)' ],
        [ 'set', '2', 'a' ],
        [ 'set', '2', 'b' ],
        [ 'set', '2', 'c' ],
        [ 'set', '2', 'd' ],
        [ 'set', '2', 'e' ],
        [ 'set', '2', 'h' ],
        [ 'set', '2', 'l' ],
        [ 'set', '3', '(hl)' ],
        [ 'set', '3', '(ix+#)' ],
        [ 'set', '3', '(iy+#)' ],
        [ 'set', '3', 'a' ],
        [ 'set', '3', 'b' ],
        [ 'set', '3', 'c' ],
        [ 'set', '3', 'd' ],
        [ 'set', '3', 'e' ],
        [ 'set', '3', 'h' ],
        [ 'set', '3', 'l' ],
        [ 'set', '4', '(hl)' ],
        [ 'set', '4', '(ix+#)' ],
        [ 'set', '4', '(iy+#)' ],
        [ 'set', '4', 'a' ],
        [ 'set', '4', 'b' ],
        [ 'set', '4', 'c' ],
        [ 'set', '4', 'd' ],
        [ 'set', '4', 'e' ],
        [ 'set', '4', 'h' ],
        [ 'set', '4', 'l' ],
        [ 'set', '5', '(hl)' ],
        [ 'set', '5', '(ix+#)' ],
        [ 'set', '5', '(iy+#)' ],
        [ 'set', '5', 'a' ],
        [ 'set', '5', 'b' ],
        [ 'set', '5', 'c' ],
        [ 'set', '5', 'd' ],
        [ 'set', '5', 'e' ],
        [ 'set', '5', 'h' ],
        [ 'set', '5', 'l' ],
        [ 'set', '6', '(hl)' ],
        [ 'set', '6', '(ix+#)' ],
        [ 'set', '6', '(iy+#)' ],
        [ 'set', '6', 'a' ],
        [ 'set', '6', 'b' ],
        [ 'set', '6', 'c' ],
        [ 'set', '6', 'd' ],
        [ 'set', '6', 'e' ],
        [ 'set', '6', 'h' ],
        [ 'set', '6', 'l' ],
        [ 'set', '7', '(hl)' ],
        [ 'set', '7', '(ix+#)' ],
        [ 'set', '7', '(iy+#)' ],
        [ 'set', '7', 'a' ],
        [ 'set', '7', 'b' ],
        [ 'set', '7', 'c' ],
        [ 'set', '7', 'd' ],
        [ 'set', '7', 'e' ],
        [ 'set', '7', 'h' ],
        [ 'set', '7', 'l' ],

        [ 'sla', '(hl)' ],
        [ 'sla', '(ix+#)' ],
        [ 'sla', '(iy+#)' ],
        [ 'sla', 'a' ],
        [ 'sla', 'b' ],
        [ 'sla', 'c' ],
        [ 'sla', 'd' ],
        [ 'sla', 'e' ],
        [ 'sla', 'h' ],
        [ 'sla', 'l' ],

        [ 'sra', '(hl)' ],
        [ 'sra', '(ix+#)' ],
        [ 'sra', '(iy+#)' ],
        [ 'sra', 'a' ],
        [ 'sra', 'b' ],
        [ 'sra', 'c' ],
        [ 'sra', 'd' ],
        [ 'sra', 'e' ],
        [ 'sra', 'h' ],
        [ 'sra', 'l' ],

        [ 'srl', '(hl)' ],
        [ 'srl', '(ix+#)' ],
        [ 'srl', '(iy+#)' ],
        [ 'srl', 'a' ],
        [ 'srl', 'b' ],
        [ 'srl', 'c' ],
        [ 'srl', 'd' ],
        [ 'srl', 'e' ],
        [ 'srl', 'h' ],
        [ 'srl', 'l' ],

        [ 'sub', '(hl)' ],
        [ 'sub', '(ix+#)' ],
        [ 'sub', '(iy+#)' ],
        [ 'sub', 'a' ],
        [ 'sub', 'b' ],
        [ 'sub', 'c' ],
        [ 'sub', 'd' ],
        [ 'sub', 'e' ],
        [ 'sub', 'h' ],
        [ 'sub', 'l' ],
        [ 'sub', '#' ],

        [ 'xor', '(hl)' ],
        [ 'xor', '(ix+#)' ],
        [ 'xor', '(iy+#)' ],
        [ 'xor', 'a' ],
        [ 'xor', 'b' ],
        [ 'xor', 'c' ],
        [ 'xor', 'd' ],
        [ 'xor', 'e' ],
        [ 'xor', 'h' ],
        [ 'xor', 'l' ],
        [ 'xor', '#' ],
    ]

operands8 = [ 0xAA, 0x55, 0x00, 0xFF ]
operands16 = [ 0x1234, 0x4231, 0x0000, 0xFFFF ]

src  = '// THIS IS A GENERATED FILE. DO NOT EDIT!\n'
src += '#include "3rdparty/catch.hpp"\n'
src += '#include "DataBlob.h"\n'
src += '#include "ErrorConsumer.h"\n'
src += '#include "TestUtil.h"\n'

def formatOpcode(opcode, i):
    global asm1, str2
    if opcode == '(ix+#)' and i == 0:
        asm1 += '(ix)'
        str2 += '(ix)'
    elif opcode == '(ix+#)' and i > 127:
        asm1 += '(ix%d)' % (127 - i)
        str2 += '(ix%d)' % (127 - i)
    elif opcode == '(iy+#)' and i == 0:
        asm1 += '(iy)'
        str2 += '(iy)'
    elif opcode == '(iy+#)' and i > 127:
        asm1 += '(iy%d)' % (127 - i)
        str2 += '(iy%d)' % (127 - i)
    elif opcode == '$+#':
        asm1 += '$%+d' % (129 - i)
        str2 += '$%+d' % (129 - i)
    else:
        asm1 += opcode.replace('##', '%d' % i).replace('#', '%d' % i)
        str2 += opcode.replace('##', '%d' % i).replace('#', '%d' % i)

for opcode in opcodes:
    opcode_name = opcode[0]
    if len(opcode) > 1:
        opcode_name += ' ' + opcode[1]
    if len(opcode) > 2:
        opcode_name += ', ' + opcode[2]

    asm1 = 'org 1234h\n'
    asm2 = [ 'section main [base 0x1234]' ]

    values1 = [ 0 ]
    if len(opcode) > 1:
        if '##' in opcode[1]:
            values1 = operands16
        elif '#' in opcode[1]:
            values1 = operands8

    values2 = [ 0 ]
    if len(opcode) > 2:
        if '##' in opcode[2]:
            values2 = operands16
        elif '#' in opcode[2]:
            values2 = operands8

    for i in values1:
        for j in values2:
            asm1 += opcode[0]
            str2  = opcode[0]
            if len(opcode) > 1:
                asm1 += ' '
                str2 += ' '
                formatOpcode(opcode[1], i)
            if len(opcode) > 2:
                asm1 += ', '
                str2 += ', '
                formatOpcode(opcode[2], j)
            asm1 += '\n'
            asm2.append(str2)

    print('%s' % opcode_name)
    with open('__temp__.asm', 'w') as f:
        f.write(asm1)
    os.system('pasmo __temp__.asm __temp__.bin')
    os.remove('__temp__.asm')
    with open('__temp__.bin', 'rb') as f:
        correctCode = f.read()
    os.remove('__temp__.bin')

    src += '\n'
    src += 'TEST_CASE("%s", "[opcodes]")\n' % (opcode_name)
    src += '{\n'
    src += '    static const char source[] =\n'
    for line in asm2:
        src += '        "%s\\n"\n' % line
    src += '        ;\n'
    src += '\n'
    src += '    static const unsigned char binary[] = {\n'
    for byte in correctCode:
        src += '        0x%02x,\n' % ord(byte)
    src += '        };\n'
    src += '\n'
    src += '    ErrorConsumer errorConsumer;\n'
    src += '    DataBlob actual = assemble(errorConsumer, source);\n'
    src += '    DataBlob expected(binary, sizeof(binary));\n'
    src += '    REQUIRE(errorConsumer.lastErrorMessage() == "");\n'
    src += '    REQUIRE(errorConsumer.errorCount() == 0);\n'
    src += '    REQUIRE(actual == expected);\n'
    src += '}\n'

with open("OpcodeTests.cpp", "w") as f:
    f.write(src)
