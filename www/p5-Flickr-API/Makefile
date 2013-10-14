# Created by: ijliao
# $FreeBSD: www/p5-Flickr-API/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Flickr-API
PORTVERSION=	1.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the Flickr API

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-XML-Parser-Lite-Tree>=0:${PORTSDIR}/textproc/p5-XML-Parser-Lite-Tree

USES=		perl5
USE_PERL5=	configure

MAN3=		Flickr::API.3 Flickr::API::Request.3 Flickr::API::Response.3

NO_STAGE=	yes
.include <bsd.port.mk>
