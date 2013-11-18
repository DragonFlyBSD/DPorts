# Created by: Timur Bakeyev <bat@cpan.org>
# $FreeBSD: textproc/p5-Net-IDN-Encode/Makefile 333844 2013-11-15 10:42:30Z sunpoet $

PORTNAME=	Net-IDN-Encode
PORTVERSION=	2.005
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Internationalizing Domain Names in Applications (RFC 3490)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-IDN-Nameprep>=0:${PORTSDIR}/converters/p5-Net-IDN-Nameprep
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
