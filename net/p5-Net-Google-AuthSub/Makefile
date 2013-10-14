# Created by: Felippe de Meirelles Motta <lippemail@gmail.com>
# $FreeBSD: net/p5-Net-Google-AuthSub/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-Google-AuthSub
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Interact with sites that implement Google style AuthSub

RUN_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::Google::AuthSub::Response.3 \
		Net::Google::AuthSub.3

NO_STAGE=	yes
.include <bsd.port.mk>
