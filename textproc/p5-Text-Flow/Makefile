# Created by: chinsan
# $FreeBSD: textproc/p5-Text-Flow/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Text-Flow
DISTVERSION=	0.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Flexible text flowing and word wrapping for not just ASCII output

RUN_DEPENDS=	p5-Moose>=0.45:${PORTSDIR}/devel/p5-Moose \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception \
		p5-Test-LongString>=0:${PORTSDIR}/devel/p5-Test-LongString
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		${PORTNAME:S/-/::/g}.3 Text::Flow::Wrap.3

NO_STAGE=	yes
.include <bsd.port.mk>
