# Created by: Robert Gogolok <gogo@cs.uni-sb.de>
# $FreeBSD: databases/tablelog/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tablelog
PORTVERSION=	0.4.4
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	http://pgfoundry.org/frs/download.php/1387/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Logs changes on a table in PostgreSQL

WRKSRC=		${WRKDIR}/table_log-${DISTVERSION}

USES=		gmake
USE_PGSQL=	yes
MAKE_ARGS=	USE_PGXS=1

.include <bsd.port.options.mk>

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/postgresql/
	@${INSTALL_PROGRAM} ${WRKSRC}/table_log.so \
		${STAGEDIR}${PREFIX}/lib/postgresql/
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/postgresql/contrib/
	@${INSTALL_DATA} ${WRKSRC}/table_log_init.sql \
		${STAGEDIR}${PREFIX}/share/postgresql/contrib/
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC} && ${INSTALL_DATA} README.table_log table_log.sql \
		${STAGEDIR}${DOCSDIR}/
.endif

.include <bsd.port.mk>
