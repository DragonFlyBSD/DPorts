# $FreeBSD: www/wikicalc/Makefile 332532 2013-11-02 18:26:36Z hrs $

PORTNAME=	wikicalc
PORTVERSION=	1.0
CATEGORIES=	www math
MASTER_SITES=	http://www.peapodcast.com/sgi/downloads/
DISTNAME=	${PORTNAME}-${PORTVERSION:S,.,-,}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	An Open Source Wiki-Spreadsheet

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww

USES=		perl5 shebangfix
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}
SUB_FILES=	setup.sh
SHEBANG_FILES=	*.pl
perl_CMD=	${LOCALBASE}/bin/perl -I${DATADIR}

post-extract:
	@${RM} -f ${WRKSRC}/gpl.txt

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	cd ${WRKSRC} && \
	${FIND} . -type f -a ! -name \*.pl -a ! -name \*.bak | \
		${XARGS} -J % ${INSTALL_DATA} % ${STAGEDIR}${DATADIR}/$${i}; \
	${FIND} . -type f -a -name \*.pl | \
		${XARGS} -J % ${INSTALL_SCRIPT} % ${STAGEDIR}${DATADIR}/$${i}; \
	${INSTALL_SCRIPT} ${WRKDIR}/setup.sh ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
