:
# $FreeBSD: ports/editors/vim/add-bad.sh,v 1.2 2012/11/17 05:57:19 svnexp Exp $

usage() {
	echo 'usage: ${0##*/} <bad patch #s to add to ${BADPATCHES}>'
	exit 1
}
if [ $# -lt 1 ]; then
	usage
fi

sed -i '' "s/^BADPATCHES=.*$/& $*/" Makefile
