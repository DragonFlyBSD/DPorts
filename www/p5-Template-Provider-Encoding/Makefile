# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: www/p5-Template-Provider-Encoding/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Template-Provider-Encoding
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kaoru@kaisei.org
COMMENT=	Template plugin to specify encoding

RUN_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Template::Provider::Encoding.3 \
	Template::Stash::ForceUTF8.3 \
	Template::Plugin::encoding.3

NO_STAGE=	yes
.include <bsd.port.mk>
