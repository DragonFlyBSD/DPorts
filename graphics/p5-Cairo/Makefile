# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: graphics/p5-Cairo/Makefile 326963 2013-09-11 11:44:41Z az $

PORTNAME=	Cairo
PORTVERSION=	1.103
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN \
		SF/gtk2-perl/${PORTNAME}/${PORTVERSION}%20%28unstable%29
MASTER_SITE_SUBDIR=	CPAN:XAOC
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Perl bindings to the cairo graphics library

LICENSE=	LGPL21

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.200:${PORTSDIR}/devel/p5-ExtUtils-Depends \
		p5-ExtUtils-PkgConfig>=1:${PORTSDIR}/devel/p5-ExtUtils-PkgConfig
LIB_DEPENDS=	cairo:${PORTSDIR}/graphics/cairo
TEST_DEPENDS=	p5-Font-FreeType>=0:${PORTSDIR}/print/p5-Font-FreeType \
		p5-Test-Number-Delta>=1:${PORTSDIR}/devel/p5-Test-Number-Delta

USES=		perl5
USE_PERL5=	configure

MAN3=		Cairo.3

.include <bsd.port.mk>
