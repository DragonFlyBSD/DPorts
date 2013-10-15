# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: devel/p5-ExtUtils-LibBuilder/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	ExtUtils-LibBuilder
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Perl module to build C libraries

BUILD_DEPENDS=	p5-ExtUtils-CBuilder>=0.27:${PORTSDIR}/devel/p5-ExtUtils-CBuilder

USES=		perl5
USE_PERL5=	modbuild

MAN3=		ExtUtils::LibBuilder.3

NO_STAGE=	yes
.include <bsd.port.mk>
