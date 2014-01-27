# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: cad/iverilog/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	iverilog
PORTVERSION=	0.9.7
CATEGORIES=	cad
MASTER_SITES=	ftp://icarus.com/pub/eda/verilog/v${PORTVERSION:C,\.[0-9]$,,}/ \
		ftp://ftp.geda.seul.org/pub/geda/dist/
DISTNAME=	verilog-${PORTVERSION}

MAINTAINER=	zeising@FreeBSD.org
COMMENT=	A Verilog simulation and synthesis tool

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USES=		bison
USE_GMAKE=	yes

CONFIGURE_ARGS=	--disable-suffix

.include <bsd.port.mk>
