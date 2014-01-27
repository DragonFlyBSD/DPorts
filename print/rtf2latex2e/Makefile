# Created by: Martin Dieringer <martin.dieringer@gmx.de>
# $FreeBSD: print/rtf2latex2e/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	rtf2latex2e
PORTVERSION=	2.2.2
CATEGORIES=	print
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-unix/2-2
DISTNAME=	${PORTNAME}-${PORTVERSION:C|\.|-|g}

MAINTAINER=	martin.dieringer@gmx.de
COMMENT=	Newer filter that converts RTF (MS Rich Text Format) into LaTeX

LICENSE=	GPLv2

USES=		gmake
MAKE_ARGS=	CC=${CC} \
		mandir=${MAN1PREFIX}/man/

.include <bsd.port.mk>
