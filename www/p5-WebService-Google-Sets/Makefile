# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: www/p5-WebService-Google-Sets/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	WebService-Google-Sets
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	WebService
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl access to Google Labs Sets site

BUILD_DEPENDS=	p5-libwww>0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	WebService::Google::Sets.3

NO_STAGE=	yes
.include <bsd.port.mk>
