# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: www/p5-HTTP-Parser/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTTP-Parser
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Parse HTTP/1.1 request into HTTP::Request/Response object

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-URI>=0:${PORTSDIR}/net/p5-URI

USES=		perl5
USE_PERL5=	configure

MAN3=		HTTP::Parser.3

NO_STAGE=	yes
.include <bsd.port.mk>
