# Created by: Jing-Tang Keith Jang <keith@FreeBSD.org>
# $FreeBSD: chinese/enscript/Makefile 340722 2014-01-22 17:00:46Z mat $

CATEGORIES=	chinese

MAINTAINER=	rafan@FreeBSD.org

RUN_DEPENDS=	ttfm.sh:${PORTSDIR}/chinese/ttfm

PAPERSIZE=	a4
MASTERDIR=	${.CURDIR}/../../print/enscript-letter

EXTRA_PATCHES=	${.CURDIR}/files/patch-*
PLIST=		${WRKDIR}/pkg-plist
PKGMESSAGE=	${.CURDIR}/pkg-message

USE_GHOSTSCRIPT_RUN=	yes

NO_STAGE=	yes
post-patch:
	@${ECHO_CMD} "share/enscript/README.BIG5" > ${WRKDIR}/pkg-plist
	@${CAT} ${MASTERDIR}/pkg-plist >> ${WRKDIR}/pkg-plist

post-install:
	@${INSTALL_DATA} ${.CURDIR}/files/README.BIG5 ${PREFIX}/share/enscript
	@${CAT} ${PKGMESSAGE}

.include "${MASTERDIR}/Makefile"
