# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: www/p5-CGI-SSI/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	CGI-SSI
PORTVERSION=	0.92
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use SSI from CGI scripts

RUN_DEPENDS=	p5-HTML-SimpleParse>=0:${PORTSDIR}/www/p5-HTML-SimpleParse \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-TimeDate>=0:${PORTSDIR}/devel/p5-TimeDate
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		CGI::SSI.3

NO_STAGE=	yes
.include <bsd.port.mk>
