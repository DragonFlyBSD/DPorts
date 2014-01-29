# Created by: Denis Barov <dindin@dindin.ru>
# $FreeBSD: sysutils/sg3_utils/Makefile 339620 2014-01-13 19:06:58Z mandree $

PORTNAME=	sg3_utils
PORTVERSION=	1.37
CATEGORIES=	sysutils
MASTER_SITES=	http://sg.danny.cz/sg/p/
EXTRACT_SUFX=	.tgz

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	Set of utilities that send SCSI commands to devices

USES=		gmake shebangfix
SHEBANG_FILES=	scripts/scsi_*

post-install:
		${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libsgutils2.so.2

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
