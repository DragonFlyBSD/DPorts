# Created by: Quentin Stievenart <acieroid@awesom.eu>
# $FreeBSD: devel/cpuflags/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cpuflags
PORTVERSION=	1.41
CATEGORIES=	devel sysutils
MASTER_SITES=	http://awesom.eu/~acieroid/files/ports/${PORTNAME}/

MAINTAINER=	acieroid@awesom.eu
COMMENT=	Determine compiler flags to best target current cpu

NO_STAGE=	yes
post-install:
	${REINPLACE_CMD} -i '' -e "s,@@SH@@,${SH:Q}," ${PREFIX}/bin/cpuflags

.include <bsd.port.mk>
