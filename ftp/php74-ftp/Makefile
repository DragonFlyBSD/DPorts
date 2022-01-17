CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php74

PKGNAMESUFFIX=	-ftp

TEST_TARGET=	test

USES+=		ssl
CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLINC}

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__DragonFly__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"
