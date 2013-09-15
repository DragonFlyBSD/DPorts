# Created by: Gabor Kovesdan
# $FreeBSD: security/p5-Crypt-Ctr/Makefile 326999 2013-09-11 18:03:40Z az $

PORTNAME=	Crypt-Ctr
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Perl extension for encrypting data in Counter Mode

BUILD_DEPENDS=	p5-Crypt-CFB>=0:${PORTSDIR}/security/p5-Crypt-CFB
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Crypt::Ctr.3

.include <bsd.port.mk>
