# Created by: Fernan Aguero
# $FreeBSD: ports/www/p5-Catalyst-Plugin-FormBuilder/Makefile,v 1.7 2012/11/17 06:02:47 svnexp Exp $

PORTNAME=	Catalyst-Plugin-FormBuilder
PORTVERSION=	1.07
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	FormBuilder for Catalyst

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-CGI-FormBuilder>=3.02:${PORTSDIR}/www/p5-CGI-FormBuilder
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Catalyst::Plugin::FormBuilder.3

.include <bsd.port.mk>
