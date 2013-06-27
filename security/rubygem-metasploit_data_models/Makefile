# $FreeBSD: security/rubygem-metasploit_data_models/Makefile 320962 2013-06-14 20:40:09Z antoine $

PORTNAME=	metasploit_data_models
PORTVERSION=	0.15.1
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
