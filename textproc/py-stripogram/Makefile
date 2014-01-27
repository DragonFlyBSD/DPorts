# Created by: Oleg Ukraincev <oleg@ht-systems.ru>
# $FreeBSD: textproc/py-stripogram/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	stripogram
PORTVERSION=	1.4
CATEGORIES=	textproc python
MASTER_SITES=	SF/squishdot/strip-o-gram/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	stripogram-1-4
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converting HTML to Plain Text and stripping specified tags from HTML

WRKSRC=		${WRKDIR}/stripogram

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
