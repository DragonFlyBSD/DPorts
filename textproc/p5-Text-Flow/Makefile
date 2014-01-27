# Created by: chinsan
# $FreeBSD: textproc/p5-Text-Flow/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Text-Flow
DISTVERSION=	0.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Flexible text flowing and word wrapping for not just ASCII output

BUILD_DEPENDS=	p5-Moose>=0.45:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception \
		p5-Test-LongString>=0:${PORTSDIR}/devel/p5-Test-LongString

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
