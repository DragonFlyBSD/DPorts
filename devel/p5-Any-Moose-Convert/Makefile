# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-Any-Moose-Convert/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	Any-Moose-Convert
PORTVERSION=	0.004
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Convert Moose libraries to Mouse ones, or vice versa

BUILD_DEPENDS=	p5-PerlIO-Util>=0:${PORTSDIR}/devel/p5-PerlIO-Util
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Moose>=0.90:${PORTSDIR}/devel/p5-Moose \
		p5-Mouse>=0.40:${PORTSDIR}/devel/p5-Mouse

USE_PERL5=	configure
USES=		perl5

MAN3=		Any::Moose::Convert.3

.include <bsd.port.mk>
