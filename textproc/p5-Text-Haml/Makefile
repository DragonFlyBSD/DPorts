# $FreeBSD: textproc/p5-Text-Haml/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Text-Haml
PORTVERSION=	0.990109
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for Haml parser

RUN_DEPENDS=	p5-URI>0:${PORTSDIR}/net/p5-URI
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=	perl5
USE_PERL5=	configure

MAN3=	Text::Haml.3 \
	Text::README.3

NO_STAGE=	yes
.include <bsd.port.mk>
