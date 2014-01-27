# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: biology/pyfasta/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pyfasta
PORTVERSION=	0.5.1
PORTREVISION=	1
CATEGORIES=	biology python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Fast, memory-efficient, pythonic access to fasta sequence files

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
