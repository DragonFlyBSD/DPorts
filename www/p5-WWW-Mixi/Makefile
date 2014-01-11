# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: www/p5-WWW-Mixi/Makefile 338773 2014-01-05 13:41:52Z az $

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

.include <bsd.port.mk>
