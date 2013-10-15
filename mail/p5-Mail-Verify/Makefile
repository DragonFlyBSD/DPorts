# Created by: Pete Fritchman <petef@databits.net >
# $FreeBSD: mail/p5-Mail-Verify/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	Mail-Verify
PORTVERSION=	0.02
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	chifeng@gmail.com
COMMENT=	Perl module to verify email addresses

BUILD_DEPENDS=	p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Mail::Verify.3

NO_STAGE=	yes
.include <bsd.port.mk>
