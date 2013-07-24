# $FreeBSD: security/rubygem-metasploit_data_models/Makefile 322864 2013-07-12 19:48:55Z swills $

PORTNAME=	metasploit_data_models
PORTVERSION=	0.16.1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	tanawts@gmail.com
COMMENT=	Database layer for Metasploit

LICENSE=	BSD

RUN_DEPENDS=	rubygem-activerecord>=3.2.13:${PORTSDIR}/databases/rubygem-activerecord \
		rubygem-activesupport>=0:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-pg>=0:${PORTSDIR}/databases/rubygem-pg

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=yes
PLIST_FILES=	bin/mdm_console

.include <bsd.port.mk>
