# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-HTML-TagFilter/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	HTML-TagFilter
PORTVERSION=	1.03
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fine-grained html-filter, xss-blocker and mailto-obfuscator

BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	HTML::TagFilter.3

.include <bsd.port.mk>
