# $FreeBSD: head/Mk/Scripts/pkgencode.awk 340713 2014-01-22 15:12:27Z mat $

BEGIN {
	for (i = 0; i <= 255; i++)
		ord[sprintf("%c", i)] = i
	for (i = 0; i < 128; i++) {
		if (i != 37)
			ascii = sprintf("%s%c", ascii, i)
	}
}
function encode(str, c, len, res) {
	len = length(str)
	res = ""
	for (i = 1; i <= len; i++) {
		c = substr(str, i, 1);
		if (index(ascii, c) != 0)
			res = res c
		else
			res = res "%" sprintf("%02X", ord[c])
	}
	return res
}
{ print encode($0); }
