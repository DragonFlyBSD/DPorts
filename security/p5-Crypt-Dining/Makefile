# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: security/p5-Crypt-Dining/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt-Dining
PORTVERSION=	1.01
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	The Dining Cryptographers' Protocol

BUILD_DEPENDS=	p5-Crypt-Random>=0:${PORTSDIR}/security/p5-Crypt-Random \
		p5-Net-Address-IPv4-Local>=0:${PORTSDIR}/net/p5-Net-Address-IPv4-Local
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Crypt::Dining.3

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
