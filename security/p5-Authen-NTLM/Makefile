# Created by: James Thomason <james@divide.org>
# $FreeBSD: security/p5-Authen-NTLM/Makefile 341821 2014-01-30 09:08:26Z az $

PORTNAME=	Authen-NTLM
PORTVERSION=	1.09
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME:C/.*-//}-${PORTVERSION}

MAINTAINER=	james@divide.org
COMMENT=	Perl5 NTLM authentication module

BUILD_DEPENDS=	p5-Digest-HMAC>=0:${PORTSDIR}/security/p5-Digest-HMAC
RUN_DEPENDS=	p5-Digest-HMAC>=0:${PORTSDIR}/security/p5-Digest-HMAC

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
