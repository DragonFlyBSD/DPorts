# Created by: Wen heping <wenheping@gmail.com>
# $FreeBSD: databases/mysqltuner/Makefile 338511 2014-01-03 00:46:47Z bapt $

PORTNAME=	mysqltuner
PORTVERSION=	1.2.0
PORTREVISION=	2
CATEGORIES=	databases
MASTER_SITES=	https://github.com/downloads/me-vlad/MySQLTuner-perl/

MAINTAINER=	fbsd-ports@opsec.eu
COMMENT=	Assist you with MySQL Configuration

LICENSE=	GPLv3

USES=		perl5
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}.pl

PORTDOCS=	README

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${STAGEDIR}${PREFIX}/bin/${PORTNAME}.pl
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
