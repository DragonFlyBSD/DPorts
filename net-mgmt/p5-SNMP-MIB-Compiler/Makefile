# Created by: Joe Clarke <marcus@marcuscom.com
# $FreeBSD: net-mgmt/p5-SNMP-MIB-Compiler/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	SNMP-MIB-Compiler
PORTVERSION=	0.06
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	marcus@FreeBSD.org
COMMENT=	A Perl MIB compiler supporting both SMIv1 and SMIv2

BUILD_DEPENDS=	p5-Data-Compare>=0:${PORTSDIR}/devel/p5-Data-Compare

USES=		perl5
USE_PERL5=	configure

MAN3=		SNMP::MIB::Compiler.3 \
		Bundle::SNMP::MIB::Compiler.3

NO_STAGE=	yes
.include <bsd.port.mk>
