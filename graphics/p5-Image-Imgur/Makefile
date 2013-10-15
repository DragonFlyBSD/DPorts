# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: graphics/p5-Image-Imgur/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	Image-Imgur
PORTVERSION=	0.01
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	gslin@gslin.org
COMMENT=	Perl extension for uploading images to http://imgur.com

RUN_DEPENDS=	p5-Moose>=0:${PORTSDIR}/devel/p5-Moose \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure

MAN3=		Image::Imgur.3

NO_STAGE=	yes
.include <bsd.port.mk>
