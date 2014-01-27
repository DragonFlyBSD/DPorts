# Created by: Munish Chopra <mchopra@engmail.uwaterloo.ca>
# $FreeBSD: sysutils/tentakel/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tentakel
PORTVERSION=	2.2
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A program for executing commands on many hosts in parallel

WRKSRC=		${WRKDIR}/${DISTNAME}/py

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
