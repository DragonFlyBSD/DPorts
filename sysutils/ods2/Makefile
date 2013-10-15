# Created by: Thierry Dussuet <dussuett@wigwam.ethz.ch>
# $FreeBSD: sysutils/ods2/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	ods2
PORTVERSION=	1.3
CATEGORIES=	sysutils
MASTER_SITES=	http://www.lugs.ch/~dussuett/
DISTNAME=	ods2

MAINTAINER=	dussuett@wigwam.ethz.ch
COMMENT=	An utility for manipulating ODS-2 filesystems

USE_ZIP=	yes
NO_WRKSUBDIR=	yes
MAKEFILE=	makefile.unix
MAKE_ARGS=	CCFLAGS="${CFLAGS}"

PLIST_FILES=	sbin/ods2
PORTDOCS=	aareadme.too aareadme.txt

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|cc |${CC} |; /-oods2/ s|vmstime\.o|& -lcompat|' \
		${WRKSRC}/${MAKEFILE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ods2 ${PREFIX}/sbin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
