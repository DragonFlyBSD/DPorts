# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: biology/pyfasta/Makefile 341984 2014-01-31 12:31:24Z miwi $

PORTNAME=	pyfasta
PORTVERSION=	0.5.1
PORTREVISION=	2
CATEGORIES=	biology python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Fast, memory-efficient, pythonic access to fasta sequence files

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
