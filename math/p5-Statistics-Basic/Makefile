# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: math/p5-Statistics-Basic/Makefile 341825 2014-01-30 09:42:48Z az $

PORTNAME=	Statistics-Basic
PORTVERSION=	1.6607
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Statistics
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Collection of basic statistics modules

BUILD_DEPENDS=	p5-Number-Format>=1.61:${PORTSDIR}/textproc/p5-Number-Format
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
