# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: net-mgmt/p5-Net-ILO/Makefile 338788 2014-01-05 15:44:11Z az $

PORTNAME=	Net-ILO
PORTVERSION=	0.54
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Interface to HP Integrated Lights-Out

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IO-Socket-SSL>0:${PORTSDIR}/security/p5-IO-Socket-SSL \
		p5-XML-Simple>0:${PORTSDIR}/textproc/p5-XML-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
