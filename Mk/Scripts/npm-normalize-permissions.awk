# MAINTAINER: tagattie@FreeBSD.org

function oct2dec(octstr, i, c, val) {
	val = 0
	for (i = 1; i <= length(octstr); i++) {
		c = substr(octstr, i, 1)
		if (c < "0" || c > "7") {
			break
		}
		val = val * 8 + (c - "0")
	}
	return val
}

# Bitwise and()/or() are gawk extensions; DragonFly's awk lacks them.
# Pure-arithmetic equivalents (all values here are small).
function band(a, b,    r, p) {
	r = 0
	p = 1
	while (a > 0 || b > 0) {
		if ((a % 2) == 1 && (b % 2) == 1)
			r += p
		a = int(a / 2)
		b = int(b / 2)
		p *= 2
	}
	return r
}

function bor(a, b,    r, p) {
	r = 0
	p = 1
	while (a > 0 || b > 0) {
		if ((a % 2) == 1 || (b % 2) == 1)
			r += p
		a = int(a / 2)
		b = int(b / 2)
		p *= 2
	}
	return r
}

{
	if (match($0, /mode=[0-7]+/)) {
		mode_str = substr($0, RSTART+5, RLENGTH-5)
		mode = oct2dec(mode_str)
		exec_bits = 73				# 0o111
		special_bits = 3584			# 0o7000
		special = band(mode, special_bits)
		if (band(mode, exec_bits) != 0) {
			newmode = bor(special, 493)	# 0o755
		} else {
			newmode = bor(special, 420)	# 0o644
		}
		sub(/mode=[0-7]+/, "mode=" sprintf("%04o", newmode))
	}
	print
}
