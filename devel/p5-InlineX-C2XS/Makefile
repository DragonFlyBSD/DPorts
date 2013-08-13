# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: devel/p5-InlineX-C2XS/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	InlineX-C2XS
PORTVERSION=	0.22
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SISYPHUS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to create an XS file from an Inline C file

BUILD_DEPENDS=	p5-Inline>=0.47:${PORTSDIR}/devel/p5-Inline
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Warn>=0.23:${PORTSDIR}/devel/p5-Test-Warn

USES=		perl5
USE_PERL5=	configure

MAN3=		InlineX::C2XS.3 InlineX::C2XS-Cookbook.3

.include <bsd.port.mk>
