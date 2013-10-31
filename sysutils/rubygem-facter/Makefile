# Created by: Tomoyuki Sakurai <cherry@trombik.org>
# $FreeBSD: sysutils/rubygem-facter/Makefile 332174 2013-10-30 21:11:45Z swills $

PORTNAME=	facter
PORTVERSION=	1.7.3
PORTREVISION=	1
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG \
		http://downloads.puppetlabs.com/facter/

MAINTAINER=	rouslan@rshell.net
COMMENT=	A cross-platform Ruby library for retrieving facts from OS

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/facter

.include <bsd.port.pre.mk>

# Restrict dmidecode dependency to i386 and amd64 systems
.if ${ARCH} == "x86_64" || ${ARCH} == "i386"
RUN_DEPENDS+=	dmidecode:${PORTSDIR}/sysutils/dmidecode
.endif

.include <bsd.port.post.mk>
