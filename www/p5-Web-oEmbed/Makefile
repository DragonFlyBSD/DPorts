# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: www/p5-Web-oEmbed/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Web-oEmbed
PORTVERSION=	0.04
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	oEmbed consumer

RUN_DEPENDS=	p5-Any-Moose>=0:${PORTSDIR}/devel/p5-Any-Moose \
		p5-HTML-Tree>=0:${PORTSDIR}/www/p5-HTML-Tree \
		p5-JSON-XS>=0:${PORTSDIR}/converters/p5-JSON-XS \
		p5-XML-LibXML-Simple>=0:${PORTSDIR}/textproc/p5-XML-LibXML-Simple \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure

MAN3=		Web::oEmbed.3

NO_STAGE=	yes
.include <bsd.port.mk>
