# Created by: Quentin Stievenart <acieroid@awesom.eu>
# $FreeBSD: devel/cpuflags/Makefile 327722 2013-09-20 17:03:26Z bapt $

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
