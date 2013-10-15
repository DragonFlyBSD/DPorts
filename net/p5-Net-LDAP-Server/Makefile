# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: net/p5-Net-LDAP-Server/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-LDAP-Server
PORTVERSION=	0.43
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Perl module for LDAP server side protocol handling

BUILD_DEPENDS=	p5-Convert-ASN1>=0.22:${PORTSDIR}/converters/p5-Convert-ASN1 \
		p5-perl-ldap>=0.39:${PORTSDIR}/net/p5-perl-ldap
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::LDAP::Server.3

NO_STAGE=	yes
.include <bsd.port.mk>
