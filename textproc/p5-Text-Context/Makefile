# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-Context/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Text-Context
PORTVERSION=	3.7
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Handle highlighting search result context snippets

RUN_DEPENDS=	p5-Text-Context-EitherSide>=1.1:${PORTSDIR}/textproc/p5-Text-Context-EitherSide \
		p5-UNIVERSAL-require>=0.03:${PORTSDIR}/devel/p5-UNIVERSAL-require \
		p5-HTML-Parser>0:${PORTSDIR}/www/p5-HTML-Parser
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Text::Context.3 \
	Text::Context::Para.3

NO_STAGE=	yes
.include <bsd.port.mk>
