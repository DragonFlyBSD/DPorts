# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: www/p5-WWW-Mixi/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	WWW-Mixi
PORTVERSION=	0.50
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kaoru@kaisei.org
COMMENT=	Perl module of Automated interface to the Mixi

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
				ja-p5-Jcode>=0:${PORTSDIR}/japanese/p5-Jcode
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		WWW::Mixi.3 WWW::Mixi::Cookbook.3 WWW::Mixi::Mixi.3

NO_STAGE=	yes
.include <bsd.port.mk>
