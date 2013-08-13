# Created by: gugu
# $FreeBSD: www/p5-HTML-FormFu-Imager/Makefile 324174 2013-08-02 18:52:07Z mat $
# Generated with App::Pm2Port . Do not edit directly, please

PORTNAME=	HTML-FormFu-Imager
PORTVERSION=	0.03006
PORTREVISION=	4
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Imager.pm helpers for HTML::FormFu file uploads

BUILD_DEPENDS=	p5-HTML-FormFu>=0:${PORTSDIR}/www/p5-HTML-FormFu \
		p5-Imager>=0:${PORTSDIR}/graphics/p5-Imager
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	HTML::FormFu::Imager.3 \
		HTML::FormFu::Inflator::Imager.3 \
		HTML::FormFu::Transformer::Imager.3 \
		HTML::FormFu::Validator::Imager::Size.3

.include <bsd.port.mk>
