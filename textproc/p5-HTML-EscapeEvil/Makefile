# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-HTML-EscapeEvil/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	HTML-EscapeEvil
PORTVERSION=	0.05
CATEGORIES=	textproc perl5 www
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Escape evil HTML tags

BUILD_DEPENDS=	p5-HTML-Tree>=0:${PORTSDIR}/www/p5-HTML-Tree \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	HTML::EscapeEvil.3

NO_STAGE=	yes
.include <bsd.port.mk>
