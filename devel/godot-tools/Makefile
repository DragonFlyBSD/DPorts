PKGNAMESUFFIX=	-tools

COMMENT=	Game integrated development environment

OPTIONS_EXCLUDE=	#
OPTIONS_SLAVE=	TOOLS
# we don't want the pkg-message from the master port
PKGMESSAGE=	${.CURDIR}/pkg-message

MASTERDIR=	${.CURDIR}/../godot

IGNORE= unmaintained, please request fixing to users mailing list
.include "${MASTERDIR}/Makefile"
